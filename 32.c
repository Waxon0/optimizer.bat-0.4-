#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <process.h>
#include <string.h>

int main(int argc, char* argv[]) {
    pthread_barrier_t barrier;
    pthread_mutexattr_t att;
    pthread_mutex_t mutex;
    pthread_t t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16;
    pthread_t t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32;
    pthread_detach(pthread_self());
    pthread_create(&t1, NULL, NULL, NULL);
    pthread_create(&t2, NULL, NULL, NULL);
    pthread_create(&t3, NULL, NULL, NULL);
    pthread_create(&t4, NULL, NULL, NULL);
    pthread_create(&t5, NULL, NULL, NULL);
    pthread_create(&t6, NULL, NULL, NULL);
    pthread_create(&t7, NULL, NULL, NULL);
    pthread_create(&t8, NULL, NULL, NULL);
    pthread_create(&t9, NULL, NULL, NULL);
    pthread_create(&t10, NULL, NULL, NULL);
    pthread_create(&t11, NULL, NULL, NULL);
    pthread_create(&t12, NULL, NULL, NULL);
    pthread_create(&t13, NULL, NULL, NULL);
    pthread_create(&t14, NULL, NULL, NULL);
    pthread_create(&t15, NULL, NULL, NULL);
    pthread_create(&t16, NULL, NULL, NULL);
    pthread_create(&t17, NULL, NULL, NULL);
    pthread_create(&t18, NULL, NULL, NULL);
    pthread_create(&t19, NULL, NULL, NULL);
    pthread_create(&t20, NULL, NULL, NULL);
    pthread_create(&t21, NULL, NULL, NULL);
    pthread_create(&t22, NULL, NULL, NULL);
    pthread_create(&t23, NULL, NULL, NULL);
    pthread_create(&t24, NULL, NULL, NULL);
    pthread_create(&t25, NULL, NULL, NULL);
    pthread_create(&t26, NULL, NULL, NULL);
    pthread_create(&t27, NULL, NULL, NULL);
    pthread_create(&t28, NULL, NULL, NULL);
    pthread_create(&t29, NULL, NULL, NULL);
    pthread_create(&t30, NULL, NULL, NULL);
    pthread_create(&t31, NULL, NULL, NULL);
    pthread_create(&t32, NULL, NULL, NULL);
    pthread_barrier_init(&barrier, NULL, 32);
    pthread_mutexattr_init(&att);
    pthread_mutexattr_setpshared(&att, PTHREAD_PROCESS_SHARED);
    pthread_mutex_init(&mutex, &att);
    pthread_barrier_destroy(&barrier);
    return 0;
}