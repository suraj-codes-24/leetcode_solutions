# Write your MySQL query statement below

select
a.book_id,a.title,a.author,a.genre,a.publication_year,
b.freq as current_borrowers 

from library_books  as a

join(select
book_id,
sum(case when return_date is null then 1
    else 0
    end) as freq
from borrowing_records
group by book_id)as b
on a.book_id=b.book_id and a.total_copies=b.freq

order by current_borrowers desc ,
         a.title                  

