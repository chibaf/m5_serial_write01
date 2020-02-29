#include <M5Stack.h>
typedef union {
  int val;
  byte binary[2];
} ui;

typedef union {
  float val;
  byte binary[4];
} uf;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  M5.begin();
  //serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  ui th,tm,ts,tml;
  uf tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10;
  th.val=5;
  tm.val=10;
  ts.val=22;
  tml.val=3;
  tmp1.val=21.0;
  tmp2.val=22.0;
  tmp3.val=23.0;
  tmp4.val=24.0;
  tmp5.val=25.0;
  tmp6.val=26.0;
  tmp7.val=27.0;
  tmp8.val=28.0;
  tmp9.val=29.0;
  tmp10.val=30.0;
  Serial.write(th.binary,2);
  Serial.write(tm.binary,2);
  Serial.write(ts.binary,2);
  Serial.write(tml.binary,2);
  Serial.write(tmp1.binary,4);
  Serial.write(tmp2.binary,4);
  Serial.write(tmp3.binary,4);
  Serial.write(tmp4.binary,4);
  Serial.write(tmp5.binary,4);
  Serial.write(tmp6.binary,4);
  Serial.write(tmp7.binary,4);
  Serial.write(tmp8.binary,4);
  Serial.write(tmp9.binary,4);
  Serial.write(tmp10.binary,4);
  //Serial.print("\n");
  delay(100);
}
