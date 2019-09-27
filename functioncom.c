#include<stdio.h>
int main()
	{
		rep();
    }
    
     int rep(void)
     {
     	int n;
		printf("\n 1->Merge Sort \n 2->Selection Sort \n 3->Bubble sort \n 4->Insertion sort");
		printf("\n Enter the number: \n ");
		scanf("%d",&n);
		 if (n==1)
	  	{
	  		mergesort();
	  	}
	  	printf("\n")
	  	if(n==2)
	  	{
 		selectionsort();
	  	}
	   	if(n==3)
	   	{
	  	bubblesort();
		}
        if(n==4)	 
		  {
	    	insertionsort();
		}
	 }
      int mergesort()
     {
     	printf("Welcome to the MergeSort Technique: \n");
   		int n1,n2,n3,i,j;
		printf("\n Enter the array One size");
		scanf("%d",&n1);
		int a[n1];
		printf("\n Enter the array elements");
    	for(i=0;i<n1;i++)
    	{
    		scanf("%d",&a[i]);
		}
			printf("\n Enetr the array two size ");
			scanf("%d",&n2);
	    	int b[n2];
	    	printf("\n Enter the array elements");
	    	for(j=0;j<n2;j++)
	    {
	    	scanf("%d",&b[j]);
		}
		  	int c[n3],k;
		  	n3=n1+n2;
		  	for(i=0;i<n1;i++)
		  {
		  		c[k]=a[i];
		  		++k;
		  }
		    	for(j=0;j<n2;j++)
		    {
		    		c[k]=b[j];
		    		++k;
			}
					for(k=0;k<n3;k++)
				{
				printf("\n %d",c[k]);
		 	   }
		 	   rep();
		 }
		 	 int selectionsort()
		 {
		    printf("Welcome to Selection Sort Technique:\n");
  	  		int n,i,j;
			printf("\n Enter the size of the array");
			scanf("%d",&n);
			int a[n];
			printf("\n Enter the array elements");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}

	 			for(j=0;j<n;j++)
	 			{
	 				if(a[i]>a[j])
	 				{
	 					int temp=a[i];
	 					int temp1=a[j];
	 					a[i]=temp1;
	 					a[j]=temp;
		 		}
	 				}
	 				for(i=0;i<n;i++)
	 				{
	 					printf("\n  Descending order of the elements is %d",a[i]);
     				}
     			rep();
		}  
		 int insertionsort()
         {	
            printf("Welcome to Insertion Sort Technique:\n");
		    int n,position, value,i;
			printf("\n Enter the array size");
			scanf("%d",&n);
			int a[n];
			printf("\n Enter the array elements");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
   			 }
			  printf("\n Enter the position at the value should be inserted");
			  scanf("%d",&position);
	 		  printf("\n Enter the value to insert");
			  scanf("%d",&value);
	 		  for(i=n-1;i>=position;i--)
	 		 {
	 		 	a[i+1]=a[i];
	 		 	a[position]=value;
	 		 }
	  
	 		  for(i=0;i<=n;i++)
	  		 {
	   
	      		printf("\n %d",a[i]);
      		 }
			   	rep();
			   	
      	}
      	int bubblesort()
      	{
      		printf("Welcome to Bubble Sort Technique:\n"); 
      		int n,i;
			printf("\n Enter the size of the array");
			scanf("%d",&n);
			int a[n];
			printf("\n Enter the array elements");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
	  		int search;
	  		int x=0;
	  		printf("\n Enter the value to be search");
	  		scanf("%d",&search);
	  		for(i=0;i<n;i++)
	  		{
	  		if(a[i]=search)
	  		{
	  		x=i;
			  }
		  		if(i==n-1 &&x==0)
		  		{
		  			printf("The value is not present in the array");
		   		}	 
		   		if(i==n-1 &&x!=0)
		   		{
		   			printf("\n The Searched value is present at the position is %d",i);
		  		 }
	  		}
	  		rep();
		  }
