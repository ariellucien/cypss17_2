"start n=node:users({query}) match p=n-[?:Friend*]->x 
with distinct n,count(distinct x) as  cnt  "
+ "start n=node:users({query}) match p=n-[?:Friend*]->x 
with distinct n,count(distinct x) as cnt1, min(cnt) as minnumber "
+ "start n=node:users({query}) match p=n-[?:Friend*]->x
with distinct n,count(distinct x) as friendsNumber, max(cnt1) as 
maxnumber, minnumber  "
+ "where  friendsNumber=minnumber or friendsNumber=maxnumber  return n.name,
friendsNumber"