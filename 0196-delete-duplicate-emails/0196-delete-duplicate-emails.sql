delete p1
from person as p1
join person p2
ON p1.Email = p2.Email AND p1.Id > p2.Id;