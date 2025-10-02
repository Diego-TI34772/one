/*
*{
	margin: 0px;
	padding: 0px;
}
body{
	background-color: #321 ;
	background-attachment: absolute;
	background-size: 100% 100%;
	position: absolute;

}

h1, .top{
	text-align: center;
	color: #fff;
	font-family: Arial;
	font-size: 20px;
	font-weight: 700;
}

a{	border:1px solid grey;
	background-color: white;
	color: black;
	width: 200px;
	display:inline-block;
	text-align: center;
	text-decoration: none;
	font-family: "arial";

}

#uno{
	background-color: transparent;
	color: transparent;
	margin-top: 0px;
	width: 100%;
	height: 150px;
	display: inline-block;
	position: fixed;
	

}
			#logo{
					background-image: url(image/logo.jpg);
				 	background-size: 100% 100%;
				 	width: 210px;
					height: 210px;
					float: left;
					display: inline-block;
					margin-left: 15px;
					margin-top: 15px;
					border-radius: 50%;
					border:none;


			}

			#Prac{ display: inline-block;
					width: 100px;
					height: 18px;
					float: left;
	   				margin-left: 45px auto;
					margin-top: 50px;
					font-style: "Arial";
					font-size: 20px;
					color: black;
					justify-content: space-between;



					}	
			#Ini{ display: inline-block;
					width: 80px;
					height: 25px;
					float: right;
					margin-right: 250px;
					margin-top: 50px;
					font-style: "Arial";
					font-size: 20px;
					border-radius: 5px 5px 5px 5px;
					box-shadow: 1px 1px 0px 1px grey;
					transition: 1s all;
					border:1px solid gray;
					}
			#Ini:hover{transition:1s all;
					transform: scale(1.1,1.1);
					}
			#Con{ display: inline-block;
					width: 120px;
					height: 25px;
					float: right;
					margin-right: -220px;
					margin-top: 50px;
					font-style: "Arial";
					font-size: 20px;
					border-radius: 5px 5px 5px 5px;
					box-shadow: 1px 1px 0px 1px grey;
					transition: 1s all;
					}
			#Con:hover{
				 	transition:1s all;
					transform: scale(1.1,1.1);
					
			}
#dos{
	background-color: /*#E5E7E9*/ black ;
	/*background-image: url(28n.jpg);*/
	background-size: 100% 100%;
	margin-top: 130px;
	/*margin-left: 40px;*/
	width: 1349px;
	height: 1300px;
	/*position: relative;*/

}
			#Nombre{color: black; 
					width: 50px;
					height: 18px;
					float: left;
					display: inline-block;
					margin-left: 145px;
					margin-top: 105px;
					font-style: "Arial";
					font-size: 20px;

			}

			#ima{	background-color: white;
					background-image: url(10n.jpg);
					background-size: 100% 100%;
					width: 300px;
					height: 250px;
					float: left;
					display: inline-block;
					margin-left: -125px;
					margin-top: 145px;
					border-radius: 20px 20px 20px 20px;

			}

			#rec{	background-color: white;
					width: 900px;
					height: 250px;
					float: left;
					display: inline-block;
					font-style: "arial";
					font-size: 20px;
					text-align: center;
					text-transform: justify;
					margin-left: 25px;
					margin-top: 145px;
					border-radius: 20px 20px 20px 20px;
					opacity: .7;

			}
			#im1{
					background-color: white;
					background-image: url(20n.jpg);
					background-size: 100% 100%;
					width: 250px;
					height: 250px;
					float: left;
					/*display: inline-block;*/
					margin-left: 150px;
					margin-top: 150px;
					border-radius: 50%;
					animation-name: im1;
 					animation-duration: 20s;
 					animation-iteration-count: 10;
				}


					#im1:hover{animation-play-state: paused;}
					@keyframes im1{
						20%{ transform: scale(1.0,1.0);
							 transform: translateY(-20px);
							 background-image: url(60n.jpg);
							 background-size: 100% 100%;				

						}

						40%{transform: scale(1.1,1.1);
							transform: translateY(-20px);
							 background-image: url(76n.jpg);
							 background-size: 100% 100%;				


						}
						60%{transform: scale(1.2,1.2);
							transform: translateY(-20px);
							 background-image: url(303n.jpg);
							 background-size: 100% 100%;				


						}
						80%{transform: scale(1.3,1.3);
							transform: translateY(-20px); 
							background-image: url(43n.jpg);
							 background-size: 100% 100%; 


				}
						100%{transform: scale(1.4,1.4);
							transform: translateY(0px);
							background-image: url(96n.jpg);
							 background-size: 100% 100%;
						}

					}	

			#c1{
					background-color: white;
					width: 400px;
					height: 200px;
					float: left;
					/*display: inline-block;*/
					margin-left: -224px;
					margin-top: 415px;
				}
			#im2{	background-image: url(52n.jpg);
					background-size: 100% 100%;
					background-color: white;
					width: 250px;
					height: 250px;
					float: left;
					/*display: inline-block;*/
					margin-left: 180px;
					margin-top: 150px;
					border-radius: 50%;
					animation-name: im2;
					animation-duration: 20s;
					animation-iteration-count: 10;
					}
				#im2:hover{animation-play-state: paused;}
					@keyframes im2{
						20%{transform: scale(1.0,1.0);
							 transform: translateY(-20px);
							 background-image: url(72n.jpg);
							 background-size: 100% 100%;
						}
						40%{transform: scale(1.1,1.1);
							transform: translateY(-20px);
							 background-image: url(66o.jpg);
							 background-size: 100% 100%;
						}
						60%{transform: scale(1.2,1.2);
							transform: translateY(-20px);
							 background-image: url(88o.jpg);
							 background-size: 100% 100%;

						}
						80%{transform: scale(1.3,1.3);
							transform: translateY(-20px); 
							background-image: url(21n.jpg);
							 background-size: 100% 100%; 

						}
						100%{transform: scale(1.4,1.4);
							transform: translateY(0px);
							background-image: url(89n.jpg);
							 background-size: 100% 100%;


						}
					}
			#c2{	
					background-color: white;
					width: 400px;
					height: 200px;
					float: left;
					/*display: inline-block;*/
					margin-left: -224px;
					margin-top: 415px;
				}
			#im3{	background-image: url(DL.jpg);
					background-size: 100% 100%;

					background-color: white;
					width: 250px;
					height: 250px;
					float: left;
					/*display: inline-block;*/
					margin-left: 220px;
					margin-top: 150px;
					border-radius: 50%;
					animation-name: im3;
 					animation-duration: 20s;
 					animation-iteration-count: 10;
				}


					#im3:hover{animation-play-state: paused;}
					@keyframes im3{
						20%{ transform: scale(1.0,1.0);
							 transform: translateY(-20px);
							 background-image: url(19.jpg);
							 background-size: 100% 100%;				

						}

						40%{transform: scale(1.1,1.1);
							transform: translateY(-20px);
							 background-image: url(80.jpg);
							 background-size: 100% 100%;				


						}
						60%{transform: scale(1.2,1.2);
							transform: translateY(-20px);
							 background-image: url(517755.jpg);
							 background-size: 100% 100%;				


						}
						80%{transform: scale(1.3,1.3);
							transform: translateY(-20px); 
							background-image: url(01.jpg);
							 background-size: 100% 100%; 


				}
						100%{transform: scale(1.4,1.4);
							transform: translateY(0px);
							background-image: url(76n.jpg);
							 background-size: 100% 100%;
						}

					}

			#c3{
						background-color: white;
					width: 400px;
					height: 200px;
					float: left;
					/*display: inline-block;*/
					margin-left: -224px;
					margin-top: 415px;
				
				}
*/
