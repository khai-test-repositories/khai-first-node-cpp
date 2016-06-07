
module.exports = require('just-try')(
  () => require('./build/Release/addon.node'),
  () => require('./build/Debug/addon.node')
).helloworld;