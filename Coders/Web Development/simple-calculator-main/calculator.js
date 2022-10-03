let result=document.getElementById("inputText");

let calculate=(number)=>{
    result.value+=number;
}

let Result=()=>{
    try{
        result.value=eval(result.value)
    }
    catch(err){
        alert("Enter the valid input")
    }
}

function clr(){
    result.value='';
}

function dlt(){
    result.value=result.value.slice(0,-1)
}

function add(num1, num2){
    result.value=num1+num2;
}
