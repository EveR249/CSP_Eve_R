let images = ["https://www.visitutah.com/azure/cmsroot/visitutah/media/site-assets/three-season-photography/southwestern-utah/southwestern-4/dixie-national-forest_more-than-just-forests_more-than-just-parks.jpg","https://www.rvngo.com/onthego/wp-content/uploads/2023/12/AdobeStock_99881548-scaled.jpeg"]

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

count = 0
function change(){
    document.getElementById("sign").src=images[count]
    if(count === 1){
        count = 0
    }else{
        count+=1
    }
}