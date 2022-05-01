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
    pthread_t t33, t34, t35, t36, t37, t38, t39, t40, t41, t42, t43, t44, t45, t46, t47, t48;
    pthread_t t49, t50, t51, t52, t53, t54, t55, t56, t57, t58, t59, t60,  t61, t62, t63, t64;
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
    pthread_create(&t33, NULL, NULL, NULL);
    pthread_create(&t34, NULL, NULL, NULL);
    pthread_create(&t35, NULL, NULL, NULL);
    pthread_create(&t36, NULL, NULL, NULL);
    pthread_create(&t37, NULL, NULL, NULL);
    pthread_create(&t38, NULL, NULL, NULL);
    pthread_create(&t39, NULL, NULL, NULL);
    pthread_create(&t40, NULL, NULL, NULL);
    pthread_create(&t41, NULL, NULL, NULL);
    pthread_create(&t42, NULL, NULL, NULL);
    pthread_create(&t43, NULL, NULL, NULL);
    pthread_create(&t44, NULL, NULL, NULL);
    pthread_create(&t45, NULL, NULL, NULL);
    pthread_create(&t46, NULL, NULL, NULL);
    pthread_create(&t47, NULL, NULL, NULL);
    pthread_create(&t48, NULL, NULL, NULL);
    pthread_create(&t49, NULL, NULL, NULL);
    pthread_create(&t50, NULL, NULL, NULL);
    pthread_create(&t51, NULL, NULL, NULL);
    pthread_create(&t52, NULL, NULL, NULL);
    pthread_create(&t53, NULL, NULL, NULL);
    pthread_create(&t54, NULL, NULL, NULL);
    pthread_create(&t55, NULL, NULL, NULL);
    pthread_create(&t56, NULL, NULL, NULL);
    pthread_create(&t57, NULL, NULL, NULL);
    pthread_create(&t58, NULL, NULL, NULL);
    pthread_create(&t59, NULL, NULL, NULL);
    pthread_create(&t60, NULL, NULL, NULL);
    pthread_create(&t61, NULL, NULL, NULL);
    pthread_create(&t62, NULL, NULL, NULL);
    pthread_create(&t63, NULL, NULL, NULL);
    pthread_create(&t64, NULL, NULL, NULL);
    pthread_barrier_init(&barrier, NULL, 64);
    pthread_mutexattr_init(&att);
    pthread_mutexattr_setpshared(&att, PTHREAD_PROCESS_SHARED);
    pthread_mutex_init(&mutex, &att);
    pthread_barrier_destroy(&barrier);
    return 0;
}