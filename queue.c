#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

t_queue *createQueue()
{
    t_queue *queue = malloc(sizeof(t_queue));
    queue->size = 0;
    queue->head_index = 0;
    queue->tail_index = 0;
    return queue;
}

int in(t_queue *queue, char *str)
{
    queue->arr[queue->tail_index] = str;
    queue->tail_index = (queue->tail_index + 1) % 20;
    if (queue->size >= 20)
    {
        queue->head_index = (queue->head_index + 1) % 20;
    }

    if (queue->size < 20)
    {
        queue->size++;
    }
    return 1;
}

int out(t_queue *queue, char **str)
{
    if (queue->size <= 0)
    {
        return 0;
    }
    *str = queue->arr[queue->head_index];
    queue->head_index = (queue->head_index + 1) % 20;
    queue->size--;
    return 1;
}

int printer(t_queue *queue)
{
    if (queue->size == 0)
    {
        return 0;
    }
    int index = queue->head_index;
    int number_of_prints = 0;
    while (index != queue->tail_index && number_of_prints < queue->size - 1)
    {
        printf("%s\n", queue->arr[index]);
        number_of_prints++;
        index = (index + 1) % 20;
    }
    printf("%s\n", queue->arr[index]);
    return 1;
}