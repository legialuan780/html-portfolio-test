var correctEmail="door@gmail.com"
var correctPhone="0123456789"
var correctPass="123456"

document.getElementById('loginForm').addEventListener("submit", function(){
    var EmailOrPhone = document.getElementById('EmailOrPhone').value;
    var Pass = document.getElementById('Pass').value

    if ((EmailOrPhone === correctEmail || EmailOrPhone === correctPhone) && Pass === correctPass){
        window.location.href="index.html"
        alert("Tài khoản chính xác")
    }
    else alert("Tài khoản hoặc mật khẩu không chính xác")
})