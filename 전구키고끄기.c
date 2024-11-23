#include <wiringPi.h>
#include <stdio.h>

#define LED_PIN 21  

int main(void) {
    // WiringPi 라이브러리 초기화
    if (wiringPiSetup() == -1) {
        printf("WiringPi Setup failed!\n");
        return 1;
    }

    // LED_PIN을 출력 모드로 설정
    pinMode(LED_PIN, OUTPUT);

    // LED를 1초 간격으로 켰다 껐다 반복
    while (1) {
	      printf("Turn On\n");
        digitalWrite(LED_PIN, HIGH);  // LED 켜기
        delay(1000);  // 1초 대기

	      printf("Turn OFf\n");
        digitalWrite(LED_PIN, LOW);   // LED 끄기
        delay(1000);  // 1초 대기
    }

    return 0;
}
