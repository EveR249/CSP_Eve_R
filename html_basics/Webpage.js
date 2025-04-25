document = FirstWebPage.html

function paint(){
    document.getElementById("three").src = "https://m.media-amazon.com/images/I/91u+X+8g5hL.jpg"
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