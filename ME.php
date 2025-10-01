<?php

    $nom=$_POST['nom'];  //Este dato lo extraigo de mi formulario
    $cor=$_POST['email']; //Este dato lo extraigo de mi formulario
    $asu="INFORMES";
    $msn=$_POST['sms']; //Este dato lo extraigo de mi formulario y es el mensaje del correo
    $fecha=Date("d")."/".Date("m")."/".Date("Y");
    $bandera=true;
    
    $mensajeHaciaHotel=$msn."\n\n\n\n FROM: ".$nom." [".$cor."] "."\n ASUNTO: ".$asu."\n ENVIADO EL DIA:".$fecha;
    $mensajeHaciaUsuario="Hotel Bon Jesus ha recibido de forma satisfactoria el siguiente mensaje: \n\n\" ".$msn." \"\n\n El dia: ".$fecha." . En breve nos comunicaremos con usted. \n\n Gracias.";

    $cabecera1 = 'From: '.$cor . "\r\n".'Reply-To: '.$cor . "\r\n" .'X-Mailer: PHP/' . phpversion();
    $cabecera2 = 'From: ti34772@uvp.edu.mx' . "\r\n".'Reply-To: [".$cor"]' . "\r\n" .'X-Mailer: PHP/' . phpversion();
    
    //or die sirve para cuando no se pueda enviar el correo asigne una variable llamada bandera en falso 
    mail("ti34772@uvp.edu.mx", $asu." (".$nom.") ", $mensajeHaciaHotel, $cabecera1) or die($bandera=false);
    mail($cor, "Copia de: ".$asu." (Enviado) ", $mensajeHaciaUsuario, $cabecera2) or die ($bandera=false);
 
    //En caso de que se envie el correo me regrese a mi página de contactanos..
    if($bandera==true)
        {
         header("Location:contactanos.php?Ans=Yes");
        }
    else
        {
          header("Location:contactanos.php?Ans=No");
        }


?>