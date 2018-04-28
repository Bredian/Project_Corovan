class Unit{
protected:
  int hp;
  int xp;
  int sp;
  int str;
  int weakness;
  int x;
  int y;
public:
  Unit(int _hp,int _xp,int _sp,int _str,int _weakness){
    hp=_hp;
    xp=_xp;
    sp=_sp;
    str=_str;
    weakness=_weakness;
  };
  int get_hp(){
    return hp;
  };
  void set_hp(int _hp){
    if(_hp>0)
      hp=_hp;
    else
      return;
  };
  
};

class Player: public Unit{
protected:
  int range=5;
  int looting=20;
  int arrow[3][2]={
    {1,20},
    {2,0},
    {3,0}
  };
public:
  Player(int _hp,int _xp,int _sp,int _str,int _weakness): Unit(_hp,_xp,_sp,_str,_weakness){};
  int shoot(int dir, int arrow);
};
void setup() {
  // put your setup code here, to run once:
  Player kek(50,0,1,1,0);
  kek.set_hp(666);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(40);
}
