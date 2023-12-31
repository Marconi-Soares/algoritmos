#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
};


struct Queue* createQueue(unsigned capacity){
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    queue->rear = capacity - 1;
    queue->array = (int*) malloc(queue->capacity * sizeof(int));
    return queue;
}

int isFull(struct Queue* queue){
    return queue->size == queue->capacity;
}

int isEmpty(struct Queue* queue){
    return queue->size == 0;
}

void enqueue(struct Queue* queue, int item){
    if (isFull(queue)) {
        printf("overflow\n");
        exit(1);
    }
    else {
        queue->rear = (queue->rear + 1) % (queue->capacity);
        queue->array[queue->rear] = item;
        queue->size++;
        printf("%d enqueue to queue\n", item);
    }
}

int dequeue(struct Queue* queue){
    if (isEmpty(queue)){
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % (queue->capacity);
    queue->size--;
    return item;
}

int front(struct Queue* queue){
    if (isEmpty(queue)){
        return INT_MIN;
    }
    return queue->array[queue->front];
}

int rear(struct Queue* queue){
    if (isEmpty(queue)){
        return INT_MIN;
    }
    return queue->array[queue->rear];
}

int main(void){
    struct Queue* queue = createQueue(100);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    printf("-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("%d dequeued from queue\n", dequeue(queue));
    printf("Front is %d\n", front(queue));
    printf("Rear is %d\n", rear(queue));

    return 0;
}
