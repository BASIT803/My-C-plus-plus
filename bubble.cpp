  #include<stdio.h> 
  #include<conio.h> 
 #define SIZE 10 
  void bubble_sort(int [],int); 
  int main() 
  { 
    int a[SIZE],n,i; 
    printf("Enter how many elements"); 
    scanf("%d",&n); 
    /*Input Array*/ 
   for(i=0;i<n;i++) 
    { 
      printf("Enter element %d ",i+1); 
      scanf("%d",&a[i]); 
    } 
    bubble_sort(a,n); 
    /*Output Array*/ 
    for(i=0;i<n;i++) 
      printf("%d ",a[i]); 
    getch(); 
  } 
  void bubble_sort(int a[],int n) 
  { 
    int i,j,swap,t; 
    swap=1; 
    i=1; 
    while(i<n && swap == 1) 
    { 
      swap = 0; 
      for(j=0;j<n-i;j++) 
      { 
        if(a[j]>a[j+1]) 
        { 
          t = a[j]; 
          a[j]=a[j+1]; 
          a[j+1] = t; 
          swap = 1; 
        } 
      } 
      i++;     } 
  } 
