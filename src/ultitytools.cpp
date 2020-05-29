#include "ultitytools.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

#define MAX_BUF_SIZE 6*1024*1024 //6M
#define HEAD_SIZE 640*720*4

int str2hex(char *pstr)
{
    int ans = 0;
    char *pt = NULL;
    pt = pstr;
    if(!pstr)
        return 0;
    if(pt[0]!=0)
        return 0;
    if(pt[1]!='x' && pt[1] !='X')
        return 0;
    pt +=2;
    while(*pt)
    {
        ans = ans << 4;
        if( (*pt >= 'A' && *pt <= "F") || (*pt >= 'a' && *pt <= 'f'))
                ans = ans | ((*pt & 0x5f) - 0x37);
        else
            ans = ans | (*pt) - 0x30;
        pt++;
    }
    return ans;
}

int executeCMD(char *cmd)
{
    FILE *fp = NULL;
    if((fp=popen(cmd,"r")) != NULL){
        fgets(cmd,sizeof(cmd),fp);
        pclose(fp);
    }
}

UltityTools::UltityTools(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.m_pBtHexCompare,SIGNAL(clicked()),this,SLOT(OnBtHexCompare()));
	connect(ui.m_pBtSerialOpen,SIGNAL(clicked()),this,SLOT(OnBtSerialOpenClicked()));
	connect(ui.m_pBtSerialClose,SIGNAL(clicked()),this,SLOT(OnBtSerialCloseClicked()));
}

UltityTools::~UltityTools()
{

}
void GetMemory(char **p, int num)
{
  *p = (char *)malloc(num);
}
void Test(void)
{
   char *str = NULL;
   GetMemory(&str, 100);
   strcpy(str, "hello");   
   printf(str);    
}

void Test1()
{
	char str[] = "Hello";
	int iLen = sizeof(str);//为6，最后一个是\0
	//char* filedata = NULL;

	int a=5,b=7,c;
    c=a+++b;
	//c=12,a=6,b=7

	printf("Hello\n");
	FILE *fp = NULL; 
	std::string sFile = "d:\\pic2\\left.bin";
    fp = fopen(sFile.c_str(), "rb");
	fseek(fp,0,SEEK_END);
	int iSize = ftell(fp);
	char* pSrc = new char[MAX_BUF_SIZE];
	memset(pSrc,0,MAX_BUF_SIZE);
	fseek(fp,0,SEEK_SET);
	int iCount = fread(pSrc,1,iSize,fp);
    fclose(fp);

	FILE* pFp1d = fopen("d:\\pic2\\left_d.BIN","wb");
	fwrite(pSrc + HEAD_SIZE,1,iSize - HEAD_SIZE,pFp1d);
	fclose(fp);
}

typedef struct bbb
{
	int b;
};

typedef struct ttt
{
	int c;
	bbb t;
};

typedef struct sss
{
	int c;
	bbb *s;

};

void Test3()
{
	//bbb bs;
	//bs.b = 5;
	ttt t;
	sss s;
	s.s = &t.t;	
	t.t.b = 5;
	printf("%d %d",t.t.b,s.s->b);
	s.s->b=6;
	printf("%d %d",t.t.b,s.s->b);


}

void Test2()
{
	float fRet = 33.3;
	int ret = int(fRet *10) % 10;

	if(ret  >= 5)
		printf("%d",ret);
}

typedef unsigned int uint8[4];
//typedef uint32 uint8[30];
void UltityTools::OnBtHexCompare()
{


	//Test3();
	int nSize1 = sizeof(int);
	int nSize = sizeof(uint8);
	//int nSize2 = sizeof(uint);
	printf("hello/n");
}

void UltityTools::OnBtSerialOpenClicked()
{
	SerialPort *sp = new SerialPort();
	int ret =  sp->openPort("COM6");


}

void UltityTools::OnBtSerialCloseClicked()
{
}
