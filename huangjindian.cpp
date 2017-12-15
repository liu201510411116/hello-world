#include <iostream>

#include<math.h>

using namespace std;

int main()

{
    
    int i, j, num,  M, S[100], S2[100], S3[100] = { 0};
    
    double S1[100], ave,sum,G;
    
    double max, min;
    
    cout << "==============欢迎进入黄金点游戏!=============" << endl;
    
    cout << "============== HELP ==============" << endl;
    
    cout << "=========N个玩家(N通常大于10)进行游戏=========" << endl;
    
    cout << "==每人写一个0~100之间的有理数 (不包括0或100)==" << endl;
    
    cout << "===========G=N位玩家平均值*0.618==============" << endl;
    
    cout << "======最高分(N): 提交数字最接近G值的玩家======" << endl;
    
    cout << "=====最低分(-2):提交数字距离G值最远的玩家=====" << endl;
    
    cout << "===========其他分(0): 其他所有玩家============" << endl;
    
    cout << "请输入玩家人数：" << endl;
    
    cin >> M;
    
    for (i = 1; i <= M; i++)
        
    {
        sum = 0;
        
        G = 0;
        
        cout << "Input the number between 1 to 100." << endl;
        
        for (j = 1; j <= M; j++)
            
        {
            
            cout <<" Player " << j << " input your choose!" << endl;
            
            cin >> num;
            
            S[j] = num;
            
            sum = sum + S[j];//S[J]存放每个人输入的数字
            
        }
        
        ave = sum / num;
        
        G = ave*0.618;
        
        cout << "黄金点是G=" << G << endl;
        
        for (j = 1; j <= M; j++)
            
        {
            
            S1[j] = abs(S[j] - G);//abs求绝对值，求出来的值放在s1[j]里
            
        }
        
        max = min = S1[1];//第一个求出来的绝对值作为参考，赋值给max，min
        
        for (j = 1; j <= M; j++)
            
        {
            
            if (S1[j] >= max)
                
                max = S1[j];
            
            else if (S1[j] < min)
                
                min = S1[j];
            
        }
        
        for (j = 1; j <= M; j++)
            
        {
            
            if (S1[j] == max)
                
                S2[j] = -2;
            
            else if (S1[j] == min)
                
                S2[j] = M;
            
            else S2[j] = 0;
            
            
            
        }
        
        for (j = 1; j <= M; j++)
            
        {
            
            cout << "本轮分数" << "S2[" << j << "]=" << S2[j] << endl;//s2[]存放本轮分数
            
            S3[j] = S3[j] + S2[j];
            
            cout << "总分数 " << "S3[" << j << "]=" << S3[j] << endl;//s3[]存放总分数
            
        }
        
    }
    
    //system("pause");
    
}
