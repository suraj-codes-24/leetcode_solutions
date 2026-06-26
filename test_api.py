import requests
import json
import os
from dotenv import load_dotenv

load_dotenv()

session = requests.Session()
session.cookies.set("LEETCODE_SESSION", os.environ.get("LEETCODE_SESSION"), domain="leetcode.com")
session.cookies.set("csrftoken", os.environ.get("LEETCODE_CSRF_TOKEN"), domain="leetcode.com")

headers = {
    "Content-Type": "application/json",
    "x-csrftoken": os.environ.get("LEETCODE_CSRF_TOKEN"),
    "Referer": "https://leetcode.com",
    "User-Agent": "Mozilla/5.0"
}

query = """
query getSubmissions($offset: Int!, $limit: Int!, $status: Int) {
    submissionList(offset: $offset, limit: $limit, status: $status) {
        submissions {
            id
            statusDisplay
            lang
        }
    }
}
"""
variables = {
    "offset": 0,
    "limit": 5,
    "status": 10
}

response = session.post(
    "https://leetcode.com/graphql",
    headers=headers,
    json={"query": query, "variables": variables}
)

print(response.status_code)
print(response.text)
