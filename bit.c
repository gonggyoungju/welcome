#include <stdio.h>

unsigned char ResetBit(unsigned char data, unsigned char bitNum){
    if (bitNum <8){ //1byte 변수라서 비트 이동은 0~7까지만 가능함
        data = data & ~(0x01 << bitNum); //shift 변경 역 후 값을 반환
        return data;
    }
}

int Sum (int a, int b){
    int result = a + b;
    return result;
    if (1){

                        }
}

void Add(int a, int b){
    printf("a의 값은 %d, b의 값은 %d, 두 수의 합은 %d 입니다.\n", a, b, a+b);
}
int main(){
    unsigned char lamp_status; //현재 8bit ???? ???? lamp_status에는 아무값도 없고 어떤 갑시 있는지 알 수 없음 
    lamp_status = lamp_status & 0xfb; // ???? ???? 8비트에 0xfb=> 1111 1011을 &비트 연산하여 lamp_status에 넣는다.
    //2bit 자리는 
    printf("lamp_status의 값은 %x 입니다.\n",lamp_status);
    printf("lamp_status의 값은 %d 입니다.\n",lamp_status);
    lamp_status = ResetBit(lamp_status,3); // lamp_state를 3만큼 shift해서 역으로 변경
    printf("lamp_state ResetBit 후 값은 %x 입니다.\n",lamp_status);
    
    short student [20]; //배열생성


    unsigned char bit_num =2; //
    unsigned char mask = ~(0x01 << bit_num);  //0xfb
    lamp_status = lamp_status & mask; //0dmfh aksemf 비트의 번호

    printf("a와 b의 합은 : %d\n 입니다.",Sum(1,3));
    printf("%c의 값은 %d 입니다.\n",65,65);
    printf("%c의 값은 %d 입니다.\n",'A','A');
    Add(5,4);

    int a, b =0;
    printf("%d  %d = %d 입니다.\n",10,10,10%10);
    return 0;
}