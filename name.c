#include <stdio.h>

int main()
{
  //store the first and last names as characters. They should not be more than 20 characters each
  char firstName[20]
  char lastName[20]

  //Next the user for their first name and their last name 
  printf("Tell me your first name: ");
  //Store the result in character called firstName
  scanf("%s", firstname);

  //Ask for the last name of the user and then store it in lastName
  printf("Tell me your last name: ");
  scanf("%s", lastName);

  //Add the two together and then print out the result
  printf("Your full name is %s %s.\n", lastName, fisrtName);

  return 0;
}
