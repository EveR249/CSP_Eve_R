document = FirstWebPage.html

function flash(){
    document.getElementById("button").style.backgroundColor = "teal"
    document.getElementById("button").style.color = "white"
}

function flashtwo(){
    document.getElementById("button").style.backgroundColor = "white"
    document.getElementById("button").style.color = "teal"
}

function show(){
    document.getElementById("extra").style.display = "block"
}

let images = ["https://m.media-amazon.com/images/I/91u+X+8g5hL.jpg","https://karabullockart.com/wp-content/uploads/2020/01/Half-In-Half-Out-10x10-1.jpeg"]
let counter = 0

function paint(){
    [countif]
    if(counter < images.length){
        document.getElementById("image").src = images[counter]
        counter +=1
    }else{
        counter = 0
        document.getElementById("image").src = images[counter]
    }
}