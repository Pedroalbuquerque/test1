
#include <Tlib.h>

tlib myT;

void setup(){
char t;
  Serial.begin(115200);

  t = myT.initialize();

  Serial.print("t="); Serial.println(t);
}

void loop(){

  Serial.print("count=");Serial.println(myT.add());
  delay(1000);

}
