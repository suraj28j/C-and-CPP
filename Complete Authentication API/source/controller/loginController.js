const db = require("../data/index");
const User = db.User;
const bcrypt = require('bcrypt');
const salt = 10;

const registraion = async (req, res) => {
    const { name, email, password, age } = req.body;
    checkUser = await User.findOne({ where: { email: email } });
    if (!checkUser) {
        const hash = bcrypt.hashSync(password, salt);
        const userData = await User.create({
            name: name,
            email: email,
            password: hash,
            age: age
        });
        res.status(201).send({ message: 'registration successfully' });
        console.log(userData);
    } else {
        res.status(201).send({ message: 'email Id already exists' });
    }
}

const login = async (req, res) => {
    const { email, password } = req.body;
    const checkUser = await User.findOne({ where: { email: email } });
    if (checkUser) {
        if (bcrypt.compareSync(password, checkUser.password)) {
            res.status(201).send({ Id:checkUser.id, Name:checkUser.name, Email_Id:checkUser.email, Age:checkUser.age });
        } else {
            res.send({ message: "email or password is wrong" });
        }
    } else {
        res.send({ message: "email or password is wrong" });
    }
}


const update = async (req, res) => {
    const { name, email, password, age } = req.body;
    const hash = bcrypt.hashSync(password, salt);
    const checkUser = await User.findOne({ where: { email: email } });
    if (checkUser) {
        if (bcrypt.compareSync(password, checkUser.password)) {
            const userData = await User.update({ name: name, age: age }, {
                where: { email: email }
            })
            res.status(201).send({ message: "update successfully" });
        } else {
            res.send({ message: "email or password is wrong" })
        }
    } else {
        res.send({ message: "email or password is wrong" })
    }
}

const deleteData = async (req, res) => {
    const { email, password } = req.body;
    checkUser = await User.findOne({ where: { email: email } });
    if (checkUser) {
        if (bcrypt.compareSync(password, checkUser.password)) {
            const data = await User.destroy({ where: { email: email } });
            if (data) {
                res.status(201).send({ message: "delete successfully" });
            } else {
                res.status(201).send({ message: "something wrong" });
            }
        } else {
            res.send({ message: "email or password is wrong" })
        }
    } else {
        res.send({ message: "email or password is wrong" })
    }
}

module.exports = { registraion, login, update, deleteData };