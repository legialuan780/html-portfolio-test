

const showProfile=document.querySelector('#showProfile')
showProfile.addEventListener('click', function(){
    cardMess.style.display='none'
    cardNotice.style.display='none'
    const cardWrap=document.querySelector('#cardWrap')
    if (cardWrap.style.display==='none'){
        cardWrap.style.display='flex'
    }
    else{
        cardWrap.style.display="none"
    }
})



// mess
const showMess =document.querySelector("#showMess")
showMess.addEventListener("click",function(){
    cardWrap.style.display='none'
    cardNotice.style.display='none'
    const cardMess=document.querySelector("#cardMess")
    if (cardMess.style.display ==="none"){
        cardMess.style.display ="flex"
    }
    else {
        cardMess.style.display ="none"
    }
})


//notice

const showNotice= document.querySelector('#notice')
showNotice.addEventListener('click', function(){
    cardWrap.style.display='none'
    cardMess.style.display='none'
    const cardNotice= document.querySelector('#cardNotice')
    if (cardNotice.style.display === 'none'){
        cardNotice.style.display='flex'

    }
    else{
        cardNotice.style.display='none'
    }
})
// create status
const showStatus = document.querySelector('.status-input')
showStatus.addEventListener('click', function(){
    document.querySelector('.create-status-wrap').style.display= 'flex'
})
 const hideStatus =document.querySelector('.hide-status')

 hideStatus.addEventListener('click', function(){
    document.querySelector('.create-status-wrap').style.display= 'none'
 })


//LikeChange
const iconLikeWraps =document.querySelectorAll('.icon-like-wrap')
const hideTexts= document.querySelectorAll('.hide-text')
iconLikeWraps.forEach(function(iconLikeWrap,index) {
    iconLikeWrap.addEventListener("click", function(){
        const like1=iconLikeWrap.querySelector('.like1')
        const like2=iconLikeWrap.querySelector('.like2')
        const hideText= hideTexts[index]

        if (like1.style.display==='none'){
            like1.style.display='flex'
            like2.style.display='none'
            hideText.style.display='none'
        }
        else {
            like2.style.display='flex'
            like1.style.display='none'
            hideText.style.display='inline'
        }
    })
});



