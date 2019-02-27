#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() {
    int n,index,no_of_neighbours,i,j,k,result[100],store[100],l,m,o,min,r_pos,r,s,t;
    char new_r_t,pos[100];
     char neighbours[100];
     int nodes[100][100];
     int delay_time[100];
      char alphabets[26]={'A','B','C','D','E','F','G','H','I',
			'J','K','L','M','N','O','P','Q','R'
			,'S','T','U','V','W','X','Y','Z'};
     clrscr();
    printf("Enter no of nodes in the Network:");
    scanf("%d",&n);
    printf("Updating new routing table of:");
    scanf(" %c",&new_r_t);
    printf("Enter the position of updating node:");
    scanf("%d",&r_pos);
    printf("No of Neighbouring nodes:");
     scanf("%d",&no_of_neighbours);


     printf("Enter the Neighbouring nodes:");
     for(i=0;i<no_of_neighbours;i++){
	 scanf(" %c",&neighbours[i]);
     }

     for(i=0;i<no_of_neighbours;i++){
	 printf("Enter weights for node %c",neighbours[i]);
	 for(j=0;j<n;j++){
	     scanf("%d",&nodes[i][j]);
	 }
     }
     for(i=0;i<no_of_neighbours;i++){
	 printf("Delay time from %c to %c:",new_r_t,neighbours[i]);
	 scanf("%d",&delay_time[i]);
     }
     for(i=0;i<n;i++){
	 for(j=0;j<no_of_neighbours;j++){
	     for(k=i;k<=i;k++){
		 store[j]=nodes[j][k];
	     }
	 }

	 for(l=0;l<no_of_neighbours;l++){

	     store[l]=store[l]+delay_time[l];
	 }
	 min=store[0];
	 pos[i]=neighbours[0];
	 for(m=0;m<no_of_neighbours;m++){
	    if(min>store[m]){
		min=store[m];
		pos[i]=neighbours[m];

	    }
	}
	 if(i==r_pos-1){
	     result[i]=0;
	 }else{
	 result[i]=min;
	 }
     }
       printf("Output Results\n\n");
       printf("To\t");
	 for(s=0;s<no_of_neighbours;s++){
	 printf("%c\t",neighbours[s]);
	 }
	 printf("New %c\t",new_r_t);
	 printf("Line");
	 for(i=0;i<n;i++){
	 for(j=0;j<no_of_neighbours;j++){
	     for(k=i;k<=i;k++){
		 store[j]=nodes[j][k];
	     }
	     }
	     printf("\n");
	     printf("%c",alphabets[i]);
	      for(r=0;r<no_of_neighbours;r++){
	     printf("\t%d",store[r]);
	     }
	     printf("\t  %d",result[i]);
	      if(result[i]==0){
	 printf("\t %c\n",'-');
	 }else{
	 printf("\t %c\n",pos[i]);
	 }

	     }
	     printf("Delay\n");
	     printf("From %c ",new_r_t);
	     for(i=0;i<no_of_neighbours;i++);
	     {
		  printf("%d\t",delay_time[i]);
	     }
     getch();
     return 0;
}

