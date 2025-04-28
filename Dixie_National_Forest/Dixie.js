function show(){
    document.getElementById("hidden").style.display = "block"
}

function hide(){
    document.getElementById("hidden").style.display = "none"
}
function showbutton(){
    if(document.getElementById("extra").style.display != "block"){
        document.getElementById("extra").style.display = "block"
        document.getElementById("show").innerHTML = "Show Less"
    }else{
        document.getElementById("extra").style.display = "none"
        document.getElementById("show").innerHTML = "Show More"
    }
}