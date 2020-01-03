// #include all libraries and so on
#include <cs50.h>
#include <stdio.h>

// make a prototype of the chart function

void chart(int score);

// make a prototype of the average function

void average();

int main(void)
{
    // ask user for number of scores and store the number in int num_scores
    
    int num_scores = get_int("Number of Scores: " );
    
    // make a new line for better UI
    
    printf("\n");
    
    // make an array of scores of size 'num_scores' 
    
    int scores[num_scores];
    
    for (int i = 0; i < num_scores; i++)
    {
        scores[i] = get_int("Value of Score no. %i: ", i + 1); // i+1 because humans don't start counting from zero
    }
    
    // make a new line for better UI
    
    printf("\n");
    
    for (int i = 0; i < num_scores; i++)
    {
        printf("Score %i: ", i +1); // i+1 because humans don't start counting from zero
        
        chart(scores[i]);    
    }
}

// declare the chart function

void chart(int score){
    
    for (int i = 0; i < score; i++){
        
        // print as many # as the size of int score
        
        printf("#");
    }
    
    // print a new line at the of the program
    
    printf("\n");
}
