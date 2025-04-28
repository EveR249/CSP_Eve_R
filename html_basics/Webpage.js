document = FirstWebPage.html
let images = ["https://karabullockart.com/wp-content/uploads/2020/01/Half-In-Half-Out-10x10-1.jpeg", "https://m.media-amazon.com/images/I/91u+X+8g5hL.jpg"]


count = 0
function change(){
    document.getElementById("sign").src=images[count]
    if(count === 1){
        count = 0
    }else{
        count+=1
    }
}

function flash(){
    document.getElementById("shw").style.backgroundColor = "white"
    document.getElementById("shw").style.color = "teal"
}


function normal(){
    document.getElementById("shw").style.color = "white"
    document.getElementById("shw").style.backgroundColor = "teal"
}

function press(){
    document.getElementById("shw").style.color = "purple"
    document.getElementById("shw").style.backgroundColor = "lavender"
}

function show(){
    if(document.getElementById("ex").style.display != "block"){
        document.getElementById("ex").style.display = "block"
        document.getElementById("shw").innerHTML = "Show Less"
    }else{
        document.getElementById("ex").style.display = "none"
        document.getElementById("shw").innerHTML = "Show More"
    }
    
}