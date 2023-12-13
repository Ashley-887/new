//基地
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//保证申请空间成功不为空
struct Node
{
    int data;
    struct Node* next;
};
//整个系统的链表
struct Node* list;
//创建表头，即创建结构体变量
struct Node* createHead()
{
                 //头节点   动态内存申请
    struct Node* headNode=(struct Node*)malloc(sizeof(struct Node));
    //断言 防止空间申请失败
    assert(headNode);
    //初始化指针
    headNode->next=NULL;
    return headNode;
}

//将用户信息变为链表形式，首尾相接，叫做创建节点
struct Node* createNode(int data)//不同点是输入用户数据
{                //新节点 
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    //断言 防止空间申请失败
    assert(newNode);
    //初始化指针
    newNode->data=data;
    newNode->next=NULL;
    //(*newNode).next=NULL;等效的，结构体指针
    return newNode;
}

//插入节点
void inserData(struct Node* headNode,int data)
{
    struct Node* newNode=createNode(data);
    newNode->next=headNode->next;
    headNode->next=newNode;
}

//打印链表
void printList(struct Node* headNode)
{
    //移动指针
    struct Node*pmove=headNode->next;
    while(pmove!=NULL)
    {
        printf("%d\t",pmove->data);
        pmove=pmove->next;
    }
}

//删除节点                                删除的指定数据
void deleteData(struct Node* headNode,int posData)
{
    struct Node* preNode=headNode;
    struct Node* curNode=headNode->next;
    while(curNode!=NULL&&curNode->data!=posData)
    {    //停止条件，只要目标节点不空且不等于目标数据，就一直找                             
        preNode=curNode;
        curNode=curNode->next;
    }
    if(curNode==NULL)
    {
        printf("删除失败，没有找到指定数据\n");
    }
    else
    {
        preNode=curNode->next;
        free(curNode);
    }
}

//查找节点
struct Node*searchData(struct Node*headNode,int posData)
{
    struct Node*pmove=headNode->next;
    while(pmove!=NULL&&pmove->data!=posData)
    {    
        pmove=pmove->next;
    }
    return pmove;
}
//菜单
void menu()
{
    printf("【链式学生成绩管理系统】\n");
    printf("----0.退出系统----\n");
    printf("----1.录入功能----\n");
    printf("----2.浏览功能----\n");
    printf("----3.查找功能----\n");
    printf("----4.修改功能----\n");
    printf("----5.删除功能----\n");
    printf("----------------- \n");
}
//跳转
void keydown()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 0:printf("退出系统\n");break;
        case 1:printf("录入功能\n");break;
        case 2:printf("浏览功能\n");break;
        case 3:printf("查找功能\n");break;
        case 4:printf("修改功能\n");break;
        case 5:printf("删除功能\n");break;
        default:printf("输入错误，请重新输入！\n");
    }
}

int main()
{
    list=createHead();
    inserData(list,666);
    printList(list);
    while(1)
    {
    menu();
    keydown();
    }
    return 0;
}