// input: 3,6,7,9,2,4,5,7,9,1,2,4,3,5,7,8,9 
// Allow the user to search the array

#include <stdio.h>

int linear_search(int array[], int search_key);

int main(void) {
  int array[17] = {3,6,7,9,2,4,5,7,9,1,2,4,3,5,7,8,9};
  int search_key;

  printf("Enter the Search Key: ");
  scanf(" %d", &search_key);
  printf("\nOutput: \n");

  linear_search(array, search_key);

  return 0;
}

int linear_search(int array[], int search_key){
  int i;
  int counter = 0;
  int index_appearance[5];        // assuming there will not be an element recurring more than 5 times

  for(i = 0; i < 17; i++){
    if(search_key == array[i]){
      index_appearance[counter] = i;
      counter++;   
    }
  }

  // size_t n = LENARRAY(index_appearance);

  if(counter > 0){
    printf("Number %d exists in the List\n", search_key);
    printf("Number %d occurs %d times\n", search_key, counter);
    printf("It appears at array indices: ");
    // for(i = 0; i < n; i++){
    //   printf(" %d ,")
    // }
    i = 0;
    while(i < counter){
      if(i == counter - 1){
        printf(" %d.\n", index_appearance[i]);
      }
      else
        printf(" %d ,", index_appearance[i]);

      i++;
    }
  }
  else{
    printf("Number %d does not exists in the List\n", search_key);
    printf("Number %d occurs %d times\n", search_key, counter);
  }

  return 0;
}
