#include<stdio.h>
//hàm search giá trị trong mảng 
int SearchArray(int arr[] ,int n , int value)
{
    for (int i = 0; i <n; i++) 
    {
        if(arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int arr[100];
    int value;
    //nhập n 
    scanf("%d",&n);
    //nhập từng giá trị cho mảng 
    for (int  i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    //nhập giá trị cần tìm kiếm 
    scanf("%d",&value);
    //lấy ra giá trị index tương ứng 
    int index=SearchArray(arr,n,value);
    //in kết quả theo điều kiện 
    if(index!=-1)
    {
        printf("Found %d at %d",value,index);
    }
    else
    {
        printf("Not found !");
    }

    return 0;
}

