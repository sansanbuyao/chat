#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int cmp_int(const void*e1,const void*e2)
//{  
//    return  *(int *)e1-*(int *)e2;
//}

struct Stu
{
    char name[20];
    int age;
};
int cmp_stu_by_name(const void*e1,const void*e2)
{
    return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test()
{
    struct Stu s[]={{"zhangsan",12},{"lisi",16},{"zhangyupeng",19}};
    int sz=sizeof(s)/sizeof(s[0]);
    qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
}

int main()
{
    /*int arr[]={9,8,7,6,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_int);//快速排序
        //排序的起始位置 排序内容的大小 每个序列的大小 传递函数地址
    for(int i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }*/
    test();
    return 0;

}