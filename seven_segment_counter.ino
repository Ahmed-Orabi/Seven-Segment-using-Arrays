int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int nums[10][7] = {
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1}
  };
void setup() {
  // put your setup code here, to run once:
for(int pin = 2;pin<=8;pin++)
{
  pinMode(pin,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=9;i++)
{
  for(int j = 2;j<=8;j++)
  {
  digitalWrite(j,nums[i][j-2]);
  }
  delay(1000);
  }
}

