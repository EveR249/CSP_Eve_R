let images = ["https://www.visitutah.com/azure/cmsroot/visitutah/media/site-assets/three-season-photography/southwestern-utah/southwestern-4/dixie-national-forest_more-than-just-forests_more-than-just-parks.jpg","https://www.rvngo.com/onthego/wp-content/uploads/2023/12/AdobeStock_99881548-scaled.jpeg"]

function show(){
    document.getElementById("hidden").style.display = "block"
}

function hide(){
    document.getElementById("hidden").style.display = "none"
}

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
    document.getElementById("button").style.backgroundColor = "black"
    document.getElementById("button").style.color = "sienna"
}


function normal(){
    document.getElementById("button").style.color = "black"
    document.getElementById("button").style.backgroundColor = "darkgreen"
}

function press(){
    document.getElementById("button").style.color = "black"
    document.getElementById("button").style.backgroundColor = "sienna"
}

function show(){
    if(document.getElementById("other").style.display != "grid"){
        document.getElementById("other").style.display = "grid"
        document.getElementById("button").innerHTML = "Show Less"
    }else{
        document.getElementById("other").style.display = "none"
        document.getElementById("button").innerHTML = "Show More"
    }
    
}
function start(){
    document.getElementById("star").style.display = "flex"
}