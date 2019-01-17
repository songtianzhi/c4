#include <stdio.h>
 struct point
    {
        int x;
        int y;
    };

int main()
{
    int index = 0;
    struct point arr[100];
    printf("欢迎进入专场位置管理系统\n");
    
    while(1){
        printf("1--添加车辆位置\n");
        printf("2--删除车辆位置\n");
        printf("3--显示所有车辆位置\n");
        printf("4--返回离我的位置最近的车辆\n");
        printf("5--退出系统\n");
        
        printf("请选择相对应的功能编号\n");
        int code = 0;
        scanf("%d",&code);
        
        if (code == 1) {
            printf("请输入车辆位置的x坐标和y坐标：\n");
            int x ;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            index++;
            
            printf("添加成功，点击回车继续\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 2) {
            
        }
        if (code == 3) {
            printf("所有车辆位置如下：\n");

            
            for(int i = 0; i < index; i++)
            {
                printf("第%d车辆的位置为(%d,%d)\n",i+1,arr[i].x,arr[i].y);
            }
            printf("\n点击回车继续\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 4) {
            
        }
        if (code == 5) {
            printf("退出系统\n");
            break;
        }
        
    }
    

}