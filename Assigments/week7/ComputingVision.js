var video;

function setup() {
 createCanvas(500, 450);
 background(255,127,80);
 video = createCapture(VIDEO);
 video.size(500,450);
 angleMode(DEGREES);


}

function draw() {

translate(250,height/2);
tint (255,127,80);

for(var i =0;i<=360; i+=90){
  rotate(i);
  image(video,0,0,250,225);
  }
}
