package databaseproject.src;

import java.sql.*;
import java.util.logging.*;

public class test {
    public static void main(String[] args) throws Exception {
        Connection con = null;
        Statement stmt = null;
        ResultSet rs = null;
        String dbFileUrl = "jdbc:sqlite:testdb.db";
        Logger logger = Logger.getLogger(test.class.getName());
        try {
            Class.forName("org.sqlite.JDBC");
            con = DriverManager.getConnection(dbFileUrl);
            
            //System.out.println("SQLite DB Connected");
            logger.log(Level.INFO, "SQLite DB Connected");
            stmt = con.createStatement();

            rs = stmt.executeQuery("select * from table1");
        }catch(Exception e) {
            logger.log(Level.SEVERE,"SQLite DB Not Connected");
            //System.out.println(e);
        } finally {
            con.close();
            stmt.close();
            logger.info("SQLite DB Disconnected");
        }
    }
}
