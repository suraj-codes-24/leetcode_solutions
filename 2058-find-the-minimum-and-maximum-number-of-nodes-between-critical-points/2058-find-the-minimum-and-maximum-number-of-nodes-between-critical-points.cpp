/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        // We need the previous node and next node
        // to determine whether the current node is a critical point.
        ListNode* previous = nullptr;
        ListNode* next = nullptr;

        // Minimum distance between two consecutive critical points.
        int minimumDistance = INT_MAX;

        // Maximum distance between the first and last critical points.
        int maximumDistance = INT_MIN;

        // Position of the current node.
        // We use 1-based indexing.
        int position = 1;

        // Position of the first critical point.
        int firstCriticalPosition = -1;

        // Position of the most recently found critical point.
        int previousCriticalPosition = -1;


        // The first and last nodes can never be critical points,
        // so we only check nodes that have both previous and next nodes.
        while (head->next != nullptr) {

            next = head->next;


            // Check whether the current node is a critical point.
            //
            // Case 1: Current node is a local maximum
            // previous > current <?? 
            //
            // Actually:
            // previous < current AND next < current
            //
            // Case 2: Current node is a local minimum
            // previous > current AND next > current
            if (previous != nullptr &&
                (
                    (previous->val > head->val && next->val > head->val) ||
                    (previous->val < head->val && next->val < head->val)
                )) {

                // If this is the first critical point,
                // store its position.
                if (firstCriticalPosition == -1) {
                    firstCriticalPosition = position;
                }
                else {
                    // Distance from the first critical point
                    // to the current critical point.
                    maximumDistance = position - firstCriticalPosition;
                }


                // If this is the first critical point,
                // there is no previous critical point to calculate distance from.
                if (previousCriticalPosition == -1) {
                    previousCriticalPosition = position;
                }
                else {

                    // Distance between the current critical point
                    // and the immediately previous critical point.
                    int currentDistance = position - previousCriticalPosition;

                    // Keep the smallest such distance.
                    minimumDistance = min(minimumDistance, currentDistance);

                    // Current critical point becomes the previous
                    // critical point for the next iteration.
                    previousCriticalPosition = position;
                }
            }


            // Move to the next node.
            previous = head;
            head = head->next;
            position++;
        }


        // If no pair of critical points was found,
        // return {-1, -1}.
        if (minimumDistance == INT_MAX) {
            return {-1, -1};
        }


        // First value  -> minimum distance
        // Second value -> maximum distance
        return {minimumDistance, maximumDistance};
    }
};