function funcionControles(){
    let varCadena = "detalle de los controles";
    //acceso al formulario
    let formulario = document.forms["frmControles"];
    //acceso a los controles
    let varRadio = formulario.elements["groupRadio"];
    varCadena += "\nRadio: " + varRadio.value;	
    let varCheck = formulario.elements["groupCheck"];
    varCadena += "\nCheck: " + varCheck.value;
    let varBasic = formulario.elements["selectBasic"];
    varCadena += "\nSelect: " + varBasic.value;
    let varMultiple = formulario.elements["selectMultiple"];
    varCadena += "\nSelect Multiple: ";

    //otros controles
    let varFile = formulario.elements["varFile"];
    varCadena += "\nFile: " + varFile.value;
    let varColor = formulario.elements["varColor"];
    varCadena += "\nColor: " + varColor.value;
    let varDate = formulario.elements["varDate"];
    varCadena += "\nDate: " + varDate.value;
    let varTime = formulario.elements["varTime"];
    varCadena += "\nTiempo: " + varTime.value;
    let varWeek = formulario.elements["varWeek"];
    varCadena += "\nSemana: " + varWeek.value;
    
}