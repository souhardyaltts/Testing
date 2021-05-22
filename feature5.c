/**
 * @file feature5.c
 * @author Souhardya Sengupta ()
 * @brief 
 * @version 0.1
 * @date 2021-05-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# define maxBalls 300
  char batsman_name[50]="PersonA5";
  int batsman_runsScored = 95;
  int batsman_ballsPlayed = 70;
  char battingTeam_teamName[50] = "TeamA";
  int battingTeam_totalRunsScored = 255;
  int battingTeam_wicketsLost = 4;
  char bowler_name[50]="PersonB3";
  int bowler_runsGiven = 12;
  int bowler_ballsBowled = 6;
  char bowlingTeam_teamName[50]="TeamB";
  int bowlingTeam_totalBallsBowled = 276;
  int bowlingTeam_totalRunsScored =285;
  int playersPerTeam=11;
  int isFirstInnings =1;
  /**
   * @brief Displays the scorecard
   * 
   */
void showScoreCard() {
    
   printf("\n\t\t\t\t|=============================== BATTING STATS ================================|"); 
   printf("\n\t\t\t\t____________________________");
   printf("\n\t\t\t\t  %s :  %d  (  %d  )",batsman_name,batsman_runsScored,batsman_ballsPlayed);
   printf("\n\t\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
   printf("\n\t\t\t\t  %s  :  %d  -  %d",battingTeam_teamName,battingTeam_totalRunsScored,battingTeam_wicketsLost);
   printf("\n\t\t\t\t____________________________");
   printf("\n\t\t\t\t|=============================== BOWLING STATS ================================|");
   printf("\n\t\t\t\t____________________________");
   printf("\n\t\t\t\t  %s   : %d  (  %d  )",bowler_name,bowler_runsGiven,bowler_ballsBowled);
   printf("\n\t\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
   printf("\n\t\t\t\t %d  :  %d  (  %d  )",bowlingTeam_teamName,battingTeam_totalRunsScored,bowlingTeam_totalBallsBowled);
   printf("\n\t\t\t\t____________________________");

}
/**
 * @brief  Validation of Innings
 * 
 * @return int 
 */
int validateInnings() {
    
    if(isFirstInnings) {
        
        if(battingTeam_wicketsLost == playersPerTeam || bowlingTeam_totalBallsBowled == maxBalls ) {
            printf("\t\t\t\t _________________________________ \n");
            printf("\t\t\t\t|                                                                                               |\n");
            printf("\t\t\t\t|====================================== FIRST-INNINGS-ENDS =====================================|\n");
            printf("\t\t\t\t|_________________________________|\n");
            printf("\t\t\t\t|==============================  %d  ===============================|\n",battingTeam_teamName);
            printf("\t\t\t\t\t\t\t  %d  -  %d \n",battingTeam_totalRunsScored,battingTeam_wicketsLost);
            //printf("\t\t\t\t\t\t\t  %d  -  %d \n",battingTeam_totalRunsScored,battingTeam_wicketsLost);
            printf("\n\t\t\t\t\t\t!!! RESULT !!!");
            printf("\n\t\t\t\t %d  needs to  score  %d   runs" ,bowlingTeam_teamName,battingTeam_totalRunsScored + 1);
            printf(" in  %d  balls \n",maxBalls);
            return 0;

            }
        }
        else {
            
            if (battingTeam_totalRunsScored > bowlingTeam_totalRunsScored) {	
                printf(" %d WON THE MATCH \n\n",battingTeam_teamName);

        	    return 0;
            } 
            else if (battingTeam_wicketsLost == playersPerTeam || bowlingTeam_totalBallsBowled == maxBalls) {
            
                if (battingTeam_totalRunsScored < bowlingTeam_totalRunsScored) {
            	printf("%d  WON THE MATCH  \n\n",bowlingTeam_teamName);
            	
            } 
            else {
            	printf("MATCH DRAW \n\n");
            	
            }
            return 0;}
        }
    
    return 1;
}
/*
void showMatchSummary() {
    printf("\t\t\t\t ||| MATCH ENDS ||| \n\n");
    printf(" %d   %d   - %d   ( %d ) \n",battingTeam->teamName,battingTeam->totalRunsScored,battingTeam->wicketsLost,bowlingTeam->totalBallsBowled);
    printf("\t\t\t\t========================================== \n");
    printf("\t\t\t\t| PLAYER \t BATTING \t BOWLING | \n");

    for (int j = 0; j < playersPerTeam; j++) {
    	Player player = battingTeam->players[j];
        printf("\t\t\t\t|----------------------------------------|\n");
    	printf("\t\t\t\t|----------------------------------------|\n");
    	printf("\t\t\t\t| " << "[" << j << "] " << player.name << "  \t ";
        cout << player.runsScored << "(" << player.ballsPlayed << ") \t\t ";
		cout << player.ballsBowled << "-" << player.runsGiven << "-";
		cout << player.wicketsTaken << "\t |" << "\n";
    }
    cout << "\t\t\t\t==========================================" << "\n\n";

    cout << bowlingTeam->teamName << " " << bowlingTeam->totalRunsScored << "-" << bowlingTeam->wicketsLost << " (" << battingTeam->totalBallsBowled << ")" << "\n";

    cout << "\t\t\t\t==========================================" << "\n";
    cout << "\t\t\t\t| PLAYER \t BATTING \t BOWLING |" << "\n";

    for (int i = 0; i < playersPerTeam; i++) {
    	Player player = bowlingTeam->players[i];
        cout << "\t\t\t\t|----------------------------------------|" << "\n";
        cout << "\t\t\t\t| " << "[" << i << "] " << player.name << "  \t ";
        cout << player.runsScored << "(" << player.ballsPlayed << ") \t\t ";
        cout << player.ballsBowled << "-" << player.runsGiven << "-";
		cout << player.wicketsTaken << "\t |" << "\n";
    }
    printf("\t\t\t\t==========================================\n\n");
}
*/
/**
 * The Sub part is a sub game played between 2 players each selected between the rival teams.
 * This is a two-player game where there are a certain number of stacks of candies.
 * Each stack contains certain number of candies.
 * The stacks are arranged in non-decreasing order from left to right based on the number of candies in each stack.
 * Let the two players be named as Tom and Jerry. 
 * For every continuous subsequence of candies stacks, Tom and Jerry will play game on this subsequence of candies stacks, Tom plays first, and they play in turn.
 * In one move, the player can choose one of the stacks and remove at least one candy from it keeping in mind the non-decreasing order of the candies stacks which needs to be maintained. 
 * The last person to make a valid move wins.
 * We need to find the continuous subsequences of candies stacks that will make Tom win if both of them play optimally. 
 * The number of candies of each stack will be recovered after the game ends for each subsequences.
 */

/**
 * @brief 
 * Sort the array
 * 
 * @param arr_name 
 * @param count 
 * @param size 
 * @param new_size 
 */
void sort_array(int*arr_name, int *count,int size, int*new_size);
/**
 * @brief Merging the arrays
 * 
 * @param arr_name 
 * @param left 
 * @param right 
 * @param count 
 * @param count_left 
 * @param count_right 
 * @param left_size 
 * @param right_size 
 * @param new_size 
 */
void merge_array(int*arr_name, int*left,int*right, int *count, int*count_left,int*count_right, int left_size, int right_size, int*new_size);
/**
 * @brief Get the position object
 * 
 * @param arr_name 
 * @param num 
 * @param size 
 * @return int 
 */
int get_position(int*arr_name, int num, int size);
/**
 * @brief Median of array
 * 
 * @param arr_name 
 * @param size 
 * @return int 
 */
int median_of_array(int*arr_name, int size);

int main(){

  int num_of_stacks;
  int evensize,oddsize;
  int sort_evensize,sort_oddsize;
  int iterator_first,iterator_second;
  int temp_var;
  int *dyn_ptr,*ddyn_ptr;
  int *dseven,*dsodd;
  int *sort_even,*sort_odd;
  int *count_even,*count_odd;
  int **even_table,**odd_table;
  long long ans=0;
  
  
  scanf("%d",&num_of_stacks);
  
  dyn_ptr=(int*)malloc(num_of_stacks*sizeof(int));
  
  ddyn_ptr=(int*)malloc((num_of_stacks-1)*sizeof(int));
  
  evensize=oddsize=(num_of_stacks-1)/2;
  
  evensize+=(num_of_stacks-1)%2;
  
  dseven=(int*)malloc(evensize*sizeof(int));
  
  dsodd=(int*)malloc(oddsize*sizeof(int));
  
  sort_even=(int*)malloc(evensize*sizeof(int));
  
  sort_odd=(int*)malloc(oddsize*sizeof(int));
  
  count_even=(int*)malloc(evensize*sizeof(int));
  
  count_odd=(int*)malloc(oddsize*sizeof(int));
  
  for(iterator_first=0;iterator_first<num_of_stacks;iterator_first++)
      scanf("%d",dyn_ptr+iterator_first);
    
  for(iterator_first=0;iterator_first<num_of_stacks-1;iterator_first++){
    ddyn_ptr[iterator_first]=dyn_ptr[iterator_first+1]-dyn_ptr[iterator_first];
    
    if(!iterator_first)
      dseven[iterator_first/2]=ddyn_ptr[iterator_first];
      
    else if(iterator_first==1)
      dsodd[iterator_first/2]=ddyn_ptr[iterator_first];
      
    else if(iterator_first%2)
      dsodd[iterator_first/2]=dsodd[iterator_first/2-1]^ddyn_ptr[iterator_first];
      
    else
      dseven[iterator_first/2]=dseven[iterator_first/2-1]^ddyn_ptr[iterator_first];
  }
  for(iterator_first=0;iterator_first<evensize;iterator_first++){
    sort_even[iterator_first]=dseven[iterator_first];
    count_even[iterator_first]=1;
  }
  
  for(iterator_first=0;iterator_first<oddsize;iterator_first++){
    sort_odd[iterator_first]=dsodd[iterator_first];
    count_odd[iterator_first]=1;
  }
  
  sort_array(sort_even,count_even,evensize,&sort_evensize);
  
  sort_array(sort_odd,count_odd,oddsize,&sort_oddsize);
  
  even_table=(int**)malloc(sort_evensize*sizeof(int*));
  
  for(iterator_first=0;iterator_first<sort_evensize;iterator_first++){
    even_table[iterator_first]=(int*)malloc((count_even[iterator_first]+1)*sizeof(int));
    even_table[iterator_first][0]=0;
  }
  
  odd_table=(int**)malloc(sort_oddsize*sizeof(int*));
  
  for(iterator_first=0;iterator_first<sort_oddsize;iterator_first++){
    odd_table[iterator_first]=(int*)malloc((count_odd[iterator_first]+1)*sizeof(int));
    
    odd_table[iterator_first][0]=0;
  }
  
  for(iterator_first=0;iterator_first<evensize;iterator_first++){
    iterator_second=get_position(sort_even,dseven[iterator_first],sort_evensize);
    
    even_table[iterator_second][++even_table[iterator_second][0]]=iterator_first;
  }
  for(iterator_first=0;iterator_first<oddsize;iterator_first++){
    iterator_second=get_position(sort_odd,dsodd[iterator_first],sort_oddsize);
    
    odd_table[iterator_second][++odd_table[iterator_second][0]]=iterator_first;
  }
  for(iterator_first=0;iterator_first<num_of_stacks-1;iterator_first++)
  
    if(iterator_first%2){
      temp_var=dyn_ptr[iterator_first]^dseven[(iterator_first-1)/2];
      iterator_second=get_position(sort_even,temp_var,sort_evensize);
      if(iterator_second>=0 && iterator_second<sort_evensize && sort_even[iterator_second]==temp_var){
        temp_var=get_position(even_table[iterator_second]+1,(iterator_first+1)/2,even_table[iterator_second][0]);
        ans+=even_table[iterator_second][0]-temp_var;
      }
      temp_var=0;
      if(iterator_first!=1)
        temp_var^=dsodd[(iterator_first-2)/2];
      iterator_second=get_position(sort_odd,temp_var,sort_oddsize);
      if(iterator_second>=0 && iterator_second<sort_oddsize && sort_odd[iterator_second]==temp_var){
        temp_var=get_position(odd_table[iterator_second]+1,iterator_first/2,odd_table[iterator_second][0]);
        ans+=odd_table[iterator_second][0]-temp_var;
      }
    }
    else{
      temp_var=dyn_ptr[iterator_first];
      if(iterator_first)
        temp_var^=dsodd[(iterator_first-1)/2];
      iterator_second=get_position(sort_odd,temp_var,sort_oddsize);
      if(iterator_second>=0 && iterator_second<sort_oddsize && sort_odd[iterator_second]==temp_var){
        temp_var=get_position(odd_table[iterator_second]+1,iterator_first/2,odd_table[iterator_second][0]);
        ans+=odd_table[iterator_second][0]-temp_var;
      }
      temp_var=0;
      if(iterator_first)
        temp_var^=dseven[(iterator_first-1)/2];
      iterator_second=get_position(sort_even,temp_var,sort_evensize);
      if(iterator_second>=0 && iterator_second<sort_evensize && sort_even[iterator_second]==temp_var){
        temp_var=get_position(even_table[iterator_second]+1,iterator_first/2,even_table[iterator_second][0]);
        ans+=even_table[iterator_second][0]-temp_var;
      }
    }
  ans=((long long)num_of_stacks)*(num_of_stacks-1)/2-ans;
  printf("%lld",ans);
  free(dyn_ptr);free(ddyn_ptr);
  free(dseven);free(dsodd);
  free(sort_even),free(sort_odd);
  free(count_even);free(count_odd);
  free(even_table);free(odd_table);
  return 0;
}
void sort_array(int*arr_name,int *count,int size,int*new_size){
  if (size < 2){
    (*new_size)=size;
    return;
  }
  int m = (size+1)/2,iterator_first;
  int *left,*right,*count_left,*count_right;
  left=(int*)malloc(m*sizeof(int));
  right=(int*)malloc((size-m)*sizeof(int));
  count_left=(int*)malloc(m*sizeof(int));
  count_right=(int*)malloc((size-m)*sizeof(int));
  for(iterator_first=0;iterator_first<m;iterator_first++){
    left[iterator_first]=arr_name[iterator_first];
    count_left[iterator_first]=count[iterator_first];
  }
  for(iterator_first=0;iterator_first<size-m;iterator_first++){
    right[iterator_first]=arr_name[iterator_first+m];
    count_right[iterator_first]=count[iterator_first+m];
  }
  int new_l_size=0,new_r_size=0;
  sort_array(left,count_left,m,&new_l_size);
  sort_array(right,count_right,size-m,&new_r_size);
  merge_array(arr_name,left,right,count,count_left,count_right,new_l_size,new_r_size,new_size);
  free(left);
  free(right);
  free(count_left);
  free(count_right);
  return;
}
void merge_array(int*arr_name,int*left,int*right,int *count,int*count_left,int*count_right,int left_size, int right_size,int*new_size){
  int iterator_first = 0, iterator_second = 0,index=0;
  while (iterator_first < left_size|| iterator_second < right_size) {
    if (iterator_first == left_size) {
      count[index] = count_right[iterator_second];
      arr_name[index++] = right[iterator_second];
      iterator_second++;
    } else if (iterator_second == right_size) {
      count[index] = count_left[iterator_first];
      arr_name[index++] = left[iterator_first];
      iterator_first++;
    } else if (left[iterator_first] <= right[iterator_second]) {
      count[index] = count_left[iterator_first];
      arr_name[index++] = left[iterator_first];
      iterator_first++;
    } else {
      count[index] = count_right[iterator_second];
      arr_name[index++] = right[iterator_second];
      iterator_second++;
    }
    if(index>1&&arr_name[index-2]==arr_name[index-1]){
      index--;
      count[index-1]+=count[index];
    }
  }
  (*new_size)=index;
  return;
}
int get_position(int*arr_name,int num,int size){
  if(size==0)
    return 0;
  if(num>median_of_array(arr_name,size))
    return get_position(&arr_name[(size+1)>>1],num,size>>1)+((size+1)>>1);
  else
    return get_position(arr_name,num,(size-1)>>1);
}
int median_of_array(int*arr_name,int size){
  return arr_name[(size-1)>>1];
}

