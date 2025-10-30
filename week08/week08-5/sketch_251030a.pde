///week08_5_pacman_part1_arc_mouth_open_close
///File-Preference 字形放大
void setup(){
    size(400, 500);
}
int x = 200, y = 250; //座標
float m = 0, dm = 0.03;//嘴巴大小 V.S. 改變量

void draw(){
  background(0);
  fill(255,255,0);///黃色的
  ///ellipse(x,y,30,30);
  arc(x, y, 30, 30, m, PI*2-m);///小精靈
  m += dm;
  if(m>1 || m<0) dm = -dm;
} 
