let images = ["https://savethewhales.org/wp-content/uploads/2017/01/VaquitaHiRezCopyright-SaveTheWhales.jpeg","https://kids.earth.org/wp-content/uploads/2022/07/Untitled-design-2022-04-12T161151.368.jpg","https://earth.org/wp-content/uploads/2022/04/unnamed-68.jpg"]
document = notes.html 
function hello(){
    let name = window.prompt("What is your name?", "Person")
    document.getElementById("title").innerHTML = "Hello " + name +"!"
}
count = 0
function change(){
    document.getElementById("image").src = images
    [countif]
    if(count === 2){
        count = 0
    }else{
        count +=1
    }
}

function highlight(){
    document.getElementById("button").style.backgroundColor = "orange"
    document.getElementById("button").style.color = "red"
}

function normal(){
    document.getElementById("button").style.color = "gray"
    document.getElementById("button").style.backgroundColor = "black"
}

function show(){
    document.getElementById("hidden").style.display = "block"
}
function pop(){
    window.alert("DON'T CLICK")
}
function push(){
    document.getElementById("button").style.color = "yellow"
    document.getElementById("button").style.backgroundColor = "green"
}

function more(){
    if(document.getElementById("ex").style.display != "flex"){
        document.getElementById("ex").style.display = "flex"
        document.getElementById("shw").innerHTML = "Show Less"
    }else{
        document.getElementById("ex").style.display = "none"
        document.getElementById("shw").innerHTML = "Show More"
    }
    
}