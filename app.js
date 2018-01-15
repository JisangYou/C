
var express = require('express');
var bodyParser = require('body-parser');
var fs = require('fs');
var port = process.env.PORT || 8079;
var app = express();
// var multer = require('multer');




app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended:true}));
app.use(express.static(__dirname + '/public'));
// app.use(express.static(__dirname + '/uploadFile'));
// app.use(multer({dest:__dirname+'/file/uploads/'}).any());
// app.use(multipartMiddleware);

var listen = app.listen(port);


require('./routes/routes')(app);