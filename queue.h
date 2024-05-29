#ifndef QUEUE_H
#define QUEUE_H

typedef struct t_queue {
  char *arr[20]; 
  int size;       
  int head_index; 
  int tail_index; 
} t_queue;

t_queue *createQueue();
int in(t_queue *queue, char *str);
int out(t_queue *queue, char **str);
int printer(t_queue *queue);

#endif 
