#include <stdio.h>

int main()
{
   int i;
   int* ptr=0; //지역변수 초기화 이슈가 떠서 0으로 초기화해줌
   int** dptr=0; //지역변수 초기화 이슈가 떠서 0으로 초기화해줌

   i = 1234;

   printf("[checking values before ptr = &i]\n");
   printf("value of i == %d\n", i); // 1234: i=1234;
   printf("address of i == %p\n", &i); // i의 주소가 출력됨
   printf("value of ptr ==%p\n", ptr); // 0: ptr의 값이 출력됨
   printf("adress of ptr ==%p\n", &ptr); // ptr의 주소가 출력됨

   ptr = &i; // i의 주소값을 ptr에 저장

   printf("\n[checking values after ptr = &i]\n");
   printf("value of i == %d\n", i); // 1234: i=1234;
   printf("address of i == %p\n", &i); // i의 주소가 출력됨
   printf("value of ptr ==%p\n", ptr); // ptr의 값이 출력됨(=i의 주소값)
   printf("address of ptr ==%p\n", &ptr); // ptr의 주소가 출력됨
   printf("value of *ptr ==%d\n", *ptr); // 1234: ptr이 가리키는 주소의 값이 출력됨 (ptr의 값이 i의 주소를 가리키기 때문에 i의 값이 출력됨)

   dptr = &ptr; // ptr의 주소값을 dptr에 저장

   printf("\n[checking values after dptr=&ptr]\n");
   printf("value of i ==%d\n", i); // 1234: i의 값이 출력됨
   printf("address of i ==%p\n", &i); // i의 주소가 출력됨
   printf("value of ptr ==%p\n", ptr); // ptr의 값(i의 주소)가 출력됨
   printf("address of *ptr ==%p\n", &ptr); // ptr의 주소가 출력됨
   printf("value of *ptr ==%d\n", *ptr); // 1234: ptr이 가리키는 주소의 값이 출력됨
   printf("value of dptr ==%p\n", dptr); // dptr의 값(ptr의 주소)가 출력됨
   printf("address of dptr == %p\n", &dptr); // dptr의 주소가 출력됨
   printf("value of *dptr ==%p\n", *dptr); // dptr이 가리키는 주소의 값이 출력됨 (dptr의 값이 ptr의 주소를 가리키기 때문에 ptr의 값이 출력됨)
   printf("value of **dptr ==%d\n", **dptr); // dptr이 가리키는 주소의 값이 가리키는 주소의 값을 출력함 (dptr의 값이 ptr의 주소를 가리킴. ptr의 값은 i의 주소를 가리킴. 따라서 i의 값이 출력됨)

   *ptr = 7777;

   printf("\n[after *pter = 7777 \n");
   printf("value of i ==%d\n", i); // 7777: i의 값이 출력됨
   printf("value of *ptr ==%d\n", *ptr); // 7777: ptr이 가리키는 주소의 값이 출력됨
   printf("value of **dptr ==%d\n", **dptr); // 7777: dptr이 가리키는 주소의 값이 가리키는 주소의 값이 출력됨

   **dptr = 8888;

   printf("\n [after **dptr = 8888] \n");
   printf("value of i == %d\n", i); // 8888: i의 값이 출력됨
   printf("value of *ptr ==%d\n", *ptr); // 8888: ptr이 가리키는 주소의 값이 출력됨
   printf("value of **dptr ==%d\n", **dptr); // 8888: dptr이 가리키는 주소의 값이 가리키는 주소의 값이 출력됨

   return 0;
   
   

}