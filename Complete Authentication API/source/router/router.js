const express = require("express");
const router = express.Router();
const loginController = require("../controller/loginController");

router.post("/reg", loginController.registraion);
router.post("/login", loginController.login);
router.post("/update",loginController.update);
router.delete("/delete",loginController.deleteData);

module.exports = router;