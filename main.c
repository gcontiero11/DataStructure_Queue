
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

void switch_manager(t_queue **main_queue, t_queue **priority_queue, t_queue **print_queue, int *priority_counter, char *input)
{
    char *new_string = malloc(strlen(input) - 2 + 1);
    switch (input[0])
    {
    case 'g':
        strcpy(new_string, (input + 2));
        in((*main_queue), new_string);
        break;

    case 'p':
        strcpy(new_string, (input + 2));
        in((*priority_queue), new_string);
        break;
    case 's':
        if ((*priority_queue)->size <= 0 && (*main_queue)->size <= 0)
        {
            printf("All queues are empty\n");
            break;
        }

        if (*priority_counter < 3 && (*priority_queue)->size > 0)
        {
            out(*priority_queue, &new_string);
            (*priority_counter)++;
            in(*print_queue, new_string);
        }
        else
        {
            (*priority_counter) = 0;
            out(*main_queue, &new_string);
            in(*print_queue, new_string);
        }
        break;
    default:
        printf("wrong format\n");
        break;
    }
}

int main()
{
    t_queue *main_queue = createQueue();
    t_queue *priority_queue = createQueue();
    t_queue *print_queue = createQueue();
    int priority_counter = 0;
    char input[50];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; 
    while (input[0] != 'f')
    {
        switch_manager(&main_queue, &priority_queue, &print_queue, &priority_counter, input);
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; 
    }
    printer(print_queue);
    return 0;
}
