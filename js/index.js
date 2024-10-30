// let cardWrap=document.getElementById("cardWrap");
// function openCard(){
//     cardWrap.classList.toggle('open-menu');
// }

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
// let cardNotice=document.getElementById("cardNotice");
// function showNotice(){
//     cardNotice.classList.toggle('open-menu');
// }
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


// document.addEventListener("DOMContentLoaded", function() {
//     var likeWraps = document.querySelectorAll('.like-wrap');

//     likeWraps.forEach(function(likeWrap) {
//         likeWrap.addEventListener('click', function() {
//             var like1 = likeWrap.querySelector('.like1');
//             var like2 = likeWrap.querySelector('.like2');
//             var likeText = likeWrap.parentNode.querySelector('.like-text');

//             // Toggle between like1 and like2 images
//             if (like1.style.opacity == 1) {
//                 like1.style.opacity = 0;
//                 like2.style.opacity = 1;
//             } else {
//                 like1.style.opacity = 1;
//                 like2.style.opacity = 0;
//             }
//         });
//     });
// });
// document.addEventListener("DOMContentLoaded", function() {
//     var likeWrap = document.querySelector('.like-wrap');
//     var like1 = document.querySelector('.like1');
//     var like2 = document.querySelector('.like2');
//     likeWrap.addEventListener('click', function() {
//         if (like1.style.opacity == 1) {
//             like1.style.opacity = 0;
//             like2.style.opacity = 1;
//         } else {
//             like1.style.opacity = 1;
//             like2.style.opacity = 0;
//         }
//     });
// });
