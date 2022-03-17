
**To write a c program to implement FIFO page replacement algorithm**

# FIFO :
This is the simplest page replacement algorithm. In this algorithm,**the operating system keeps track of all pages in the memory in a queue, the oldest page is in the front of the queue**. When a page needs to be replaced page in the front of the queue is selected for removal

# Inputs required :
1. Input the number of pages. (Value of ref)
2. Input values of page value. (series of references)
3. Input size of frames. (number of frames,in this code its maxed on 10)

# Course of action :
When frame array is full and when new value come we need to see if already present in frame array or not,if not the new value and we need to enter that value in array and remove the value using FIFO concept. Page Fault counter will increment here.

# Output :
Number of pages
Value of pages  
The frames
Number of page faults

# Example :

1. In my example we have 
2. Enter the no. of pages :12 
3. Enter the page numbers :0, 0, 1, 0, 3, 1, 2, 2, 4, 4, 3, 0
4. Enter the number of frames: 2
5. ref string         page frames
 0               0       -1
 0
 1               0       1
 0
 3               3       1
 1
 2               3       2
 2
 4               4       2
 4
 3               4       3
 0               0       3
6. Total Page Fault is 7


