const { Sequelize, DataTypes } = require("sequelize");
const sequelize = new Sequelize('test', 'root', 'root', {
    host: 'localhost',
    dialect: 'mysql',
    logging: false
})

try {
    sequelize.authenticate();
    console.log("Database connection has been established successfully");
} catch (error) {
    console.log('Unable to connect to the database', error);
}

const db = {};
db.sequelize = sequelize;
db.User = require('./user')(sequelize, DataTypes);

sequelize.sync({ force: false });

module.exports = db;