const express = require("express");
const server = express();
const bodyParser = require("body-parser");
const router = require("./source/router/router");


server.use(bodyParser.json());
server.use(router);

server.listen(3000,()=>{
    console.log("Server is running");
})